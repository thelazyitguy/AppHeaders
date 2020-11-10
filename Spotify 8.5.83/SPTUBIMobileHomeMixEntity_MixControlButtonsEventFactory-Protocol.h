//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL;
@protocol SPTUBIEventAbsoluteLocation, SPTUBIEventLocation, SPTUBIImpressionEvent, SPTUBIMobileHomeMixEntity_MixControlButtons_ChillButtonEventFactory, SPTUBIMobileHomeMixEntity_MixControlButtons_PlayPauseButtonEventFactory, SPTUBIMobileHomeMixEntity_MixControlButtons_UpbeatButtonEventFactory;

@protocol SPTUBIMobileHomeMixEntity_MixControlButtonsEventFactory <NSObject>
- (id <SPTUBIImpressionEvent>)impression;
- (id <SPTUBIMobileHomeMixEntity_MixControlButtons_UpbeatButtonEventFactory>)upbeatButtonFactoryWithUri:(NSURL *)arg1;
- (id <SPTUBIMobileHomeMixEntity_MixControlButtons_PlayPauseButtonEventFactory>)playPauseButtonFactoryWithUri:(NSURL *)arg1;
- (id <SPTUBIMobileHomeMixEntity_MixControlButtons_ChillButtonEventFactory>)chillButtonFactoryWithUri:(NSURL *)arg1;
- (id <SPTUBIEventAbsoluteLocation>)absoluteLocation;
- (id <SPTUBIEventLocation>)_location;
@end

