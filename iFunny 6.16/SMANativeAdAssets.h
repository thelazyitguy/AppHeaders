//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, SMANativeImage;

@interface SMANativeAdAssets : NSObject
{
    NSString *_mainText;
    NSString *_title;
    NSString *_sponsored;
    NSString *_cta;
    NSArray *_images;
    SMANativeImage *_icon;
    double _rating;
}

@property(nonatomic) double rating; // @synthesize rating=_rating;
@property(retain, nonatomic) SMANativeImage *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSArray *images; // @synthesize images=_images;
@property(copy, nonatomic) NSString *cta; // @synthesize cta=_cta;
@property(copy, nonatomic) NSString *sponsored; // @synthesize sponsored=_sponsored;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *mainText; // @synthesize mainText=_mainText;
- (void).cxx_destruct;

@end
