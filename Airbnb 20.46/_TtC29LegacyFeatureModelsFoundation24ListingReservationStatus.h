//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class AIRDate, NSNumber, NSString;

@interface _TtC29LegacyFeatureModelsFoundation24ListingReservationStatus : AIRModel
{
    // Error parsing type: , name: status
    // Error parsing type: , name: reservationCheckIn
    // Error parsing type: , name: reservationCheckOut
    // Error parsing type: , name: reservationNumberOfGuests
    // Error parsing type: , name: title
}

+ (id)idAttributeName;
+ (_Bool)mergeable;
+ (_Bool)cacheable;
- (void).cxx_destruct;
- (id)initWithExternalRepresentation:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;
- (id)init;
@property(nonatomic, copy) NSString *title;
@property(nonatomic, retain) NSNumber *reservationNumberOfGuests; // @synthesize reservationNumberOfGuests;
@property(nonatomic, retain) AIRDate *reservationCheckOut; // @synthesize reservationCheckOut;
@property(nonatomic, retain) AIRDate *reservationCheckIn; // @synthesize reservationCheckIn;
@property(nonatomic, copy) NSString *status;

@end
