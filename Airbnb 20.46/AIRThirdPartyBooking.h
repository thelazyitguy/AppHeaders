//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class NSString;

@interface AIRThirdPartyBooking : AIRModel
{
    NSString *_bookerID;
    NSString *_pendingTravelerID;
    NSString *_travelerID;
}

+ (id)idAttributeName;
+ (id)customKeyPathMapping;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *travelerID; // @synthesize travelerID=_travelerID;
@property(readonly, copy, nonatomic) NSString *pendingTravelerID; // @synthesize pendingTravelerID=_pendingTravelerID;
@property(readonly, copy, nonatomic) NSString *bookerID; // @synthesize bookerID=_bookerID;

@end
