//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GMSEntityProvider-Protocol.h"

@class NSString;

@interface GMSClientVectorOpsEntityProvider : NSObject <GMSEntityProvider>
{
    struct reffed_ptr<gmscore::vector::ClientVectorOpsBehavior> _behavior;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)wasReleasedFromEntityUIHandler:(id)arg1;
- (void)wasBoundToEntityUIHandler:(id)arg1;
- (_Bool)supportsMetal;
- (void)willDestroyRenderer:(objc_metadata_hider_ptr_a1c2b231)arg1;
- (void)didCreateRenderer:(objc_metadata_hider_ptr_a1c2b231)arg1 resources:(id)arg2 behaviorCamera:(reffed_ptr_329922e5)arg3;
- (void)removeClientVectorOps:(id)arg1;
- (void)addClientVectorOps:(id)arg1 tapDelegate:(id)arg2 configuration:(struct ClientVectorOpsPassConfiguration)arg3;
- (void)refreshStyleTables:(int)arg1;
- (id)initWithResourceManager:(id)arg1 styleTableService:(id)arg2 labelsEntityProvider:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
