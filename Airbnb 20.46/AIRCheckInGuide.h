//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class AIRCheckInGuideReservation, AIRDate, AIRListingWirelessInfo, NSArray, NSDate, NSNumber, NSString;

@interface AIRCheckInGuide : AIRModel
{
    NSString *_guideID;
    NSString *_listingID;
    long long _status;
    NSNumber *_notificationStatus;
    NSDate *_updatedAt;
    NSString *_address;
    NSString *_phone;
    NSString *_localizedAddress;
    NSString *_language;
    NSString *_localizedLanguage;
    NSArray *_methods;
    NSArray *_steps;
    AIRListingWirelessInfo *_wirelessInfo;
    AIRCheckInGuideReservation *_reservation;
    NSString *_localizedCheckInTimeWindow;
    AIRDate *_visibleStartingAt;
    AIRDate *_visibleEndingAt;
}

+ (id)customTransformers;
+ (id)customKeyPathMapping;
+ (id)idAttributeName;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) AIRDate *visibleEndingAt; // @synthesize visibleEndingAt=_visibleEndingAt;
@property(readonly, copy, nonatomic) AIRDate *visibleStartingAt; // @synthesize visibleStartingAt=_visibleStartingAt;
@property(readonly, copy, nonatomic) NSString *localizedCheckInTimeWindow; // @synthesize localizedCheckInTimeWindow=_localizedCheckInTimeWindow;
@property(readonly, copy, nonatomic) AIRCheckInGuideReservation *reservation; // @synthesize reservation=_reservation;
@property(readonly, copy, nonatomic) AIRListingWirelessInfo *wirelessInfo; // @synthesize wirelessInfo=_wirelessInfo;
@property(readonly, copy, nonatomic) NSArray *steps; // @synthesize steps=_steps;
@property(readonly, copy, nonatomic) NSArray *methods; // @synthesize methods=_methods;
@property(readonly, copy, nonatomic) NSString *localizedLanguage; // @synthesize localizedLanguage=_localizedLanguage;
@property(readonly, copy, nonatomic) NSString *language; // @synthesize language=_language;
@property(readonly, copy, nonatomic) NSString *localizedAddress; // @synthesize localizedAddress=_localizedAddress;
@property(readonly, copy, nonatomic) NSString *phone; // @synthesize phone=_phone;
@property(readonly, copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(readonly, copy, nonatomic) NSDate *updatedAt; // @synthesize updatedAt=_updatedAt;
@property(readonly, copy, nonatomic) NSNumber *notificationStatus; // @synthesize notificationStatus=_notificationStatus;
@property(readonly, nonatomic) long long status; // @synthesize status=_status;
@property(readonly, copy, nonatomic) NSString *listingID; // @synthesize listingID=_listingID;
@property(readonly, copy, nonatomic) NSString *guideID; // @synthesize guideID=_guideID;
@property(readonly, nonatomic) _Bool meetsVisibilityRequirementsIfPresent;
- (_Bool)isEqual:(id)arg1;

@end
