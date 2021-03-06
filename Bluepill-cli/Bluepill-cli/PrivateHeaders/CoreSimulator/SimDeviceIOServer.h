//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SimDeviceIO.h"

#import "SimDeviceIOInterface-Protocol.h"

@class NSArray, NSDictionary;

@interface SimDeviceIOServer : SimDeviceIO <SimDeviceIOInterface>
{
    NSDictionary *_loadedBundles;
    NSArray *_ioPorts;
    NSArray *_ioPortProxies;
}

@property(retain, nonatomic) NSArray *ioPortProxies; // @synthesize ioPortProxies=_ioPortProxies;
@property(retain, nonatomic) NSArray *ioPorts; // @synthesize ioPorts=_ioPorts;
@property(retain, nonatomic) NSDictionary *loadedBundles; // @synthesize loadedBundles=_loadedBundles;
//- (void).cxx_destruct;
- (BOOL)unregisterService:(id)arg1 error:(id *)arg2;
- (BOOL)registerPort:(unsigned int)arg1 service:(id)arg2 error:(id *)arg3;
- (struct NSDictionary *)makeRequest:(id)arg1 fields:(struct NSDictionary *)arg2;
- (id)tvOutDisplayDescriptorState;
- (id)mainDisplayDescriptorState;
- (BOOL)unloadAllBundles;
- (BOOL)loadAllBundles;

@end

