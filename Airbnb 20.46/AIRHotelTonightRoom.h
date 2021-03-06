//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AIRModel.h"

@class NSNumber, NSString, NSURL;

@interface AIRHotelTonightRoom : AIRModel
{
    NSString *_hotelID;
    NSString *_name;
    NSNumber *_price;
    NSString *_localizedPrice;
    NSString *_localizedPriceWithText;
    NSURL *_url;
    NSURL *_smallImageURL;
    NSURL *_mediumImageURL;
    NSURL *_largeImageURL;
}

+ (id)customTransformers;
+ (id)customKeyPathMapping;
+ (id)idAttributeName;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSURL *largeImageURL; // @synthesize largeImageURL=_largeImageURL;
@property(readonly, copy, nonatomic) NSURL *mediumImageURL; // @synthesize mediumImageURL=_mediumImageURL;
@property(readonly, copy, nonatomic) NSURL *smallImageURL; // @synthesize smallImageURL=_smallImageURL;
@property(readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, copy, nonatomic) NSString *localizedPriceWithText; // @synthesize localizedPriceWithText=_localizedPriceWithText;
@property(readonly, copy, nonatomic) NSString *localizedPrice; // @synthesize localizedPrice=_localizedPrice;
@property(readonly, copy, nonatomic) NSNumber *price; // @synthesize price=_price;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *hotelID; // @synthesize hotelID=_hotelID;

@end

