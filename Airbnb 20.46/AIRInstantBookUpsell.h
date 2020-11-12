//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class NSNumber, NSString;

@interface AIRInstantBookUpsell : AIRModel
{
    NSString *_bannerName;
    NSString *_listingId;
    NSString *_listingName;
    NSString *_title;
    NSString *_subtitle;
    NSNumber *_dismissedMemoryId;
}

+ (id)idAttributeName;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSNumber *dismissedMemoryId; // @synthesize dismissedMemoryId=_dismissedMemoryId;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *listingName; // @synthesize listingName=_listingName;
@property(readonly, copy, nonatomic) NSString *listingId; // @synthesize listingId=_listingId;
@property(readonly, copy, nonatomic) NSString *bannerName; // @synthesize bannerName=_bannerName;

@end
