//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LolomoListItemViewModel.h"

@class LolomoBillboardEntity, NSDictionary;

@interface LolomoBillboardItemViewModel : LolomoListItemViewModel
{
    NSDictionary *_extraBillboardTrackingDataDictionary;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *extraBillboardTrackingDataDictionary; // @synthesize extraBillboardTrackingDataDictionary=_extraBillboardTrackingDataDictionary;
- (id)trackingInfo;
- (id)initWithEntity:(id)arg1 list:(id)arg2;
- (void)decorateBillboardPresentationDataDictionary:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) LolomoBillboardEntity *entity; // @dynamic entity;

@end

