//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL;
@protocol SPTUBIEventAbsoluteLocation, SPTUBIEventLocation, SPTUBIMobileSocialListeningParticipants_ConfirmEndSessionDialog_CancelButtonEventFactory, SPTUBIMobileSocialListeningParticipants_ConfirmEndSessionDialog_EndButtonEventFactory;

@protocol SPTUBIMobileSocialListeningParticipants_ConfirmEndSessionDialogEventFactory <NSObject>
- (id <SPTUBIMobileSocialListeningParticipants_ConfirmEndSessionDialog_CancelButtonEventFactory>)cancelButtonFactoryWithUri:(NSURL *)arg1;
- (id <SPTUBIMobileSocialListeningParticipants_ConfirmEndSessionDialog_EndButtonEventFactory>)endButtonFactoryWithUri:(NSURL *)arg1;
- (id <SPTUBIEventAbsoluteLocation>)absoluteLocation;
- (id <SPTUBIEventLocation>)_location;
@end

