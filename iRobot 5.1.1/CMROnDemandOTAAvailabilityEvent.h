//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/CMRAssetEvent.h>

@interface CMROnDemandOTAAvailabilityEvent : CMRAssetEvent
{
    struct Handle<std::__1::shared_ptr<core::OnDemandOTAAvailabilityEvent>, std::__1::shared_ptr<core::OnDemandOTAAvailabilityEvent>> _cppRefHandle;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)forcedPublish;
- (long long)eventType;
- (_Bool)equals:(id)arg1;
- (id)key;
- (id)timestamp;
- (id)assetId;
- (_Bool)startConnectionStateMet;
- (long long)startError;
- (const shared_ptr_2e739787 *)cppRef;
- (id)initWithCpp:(const shared_ptr_2e739787 *)arg1;

@end
