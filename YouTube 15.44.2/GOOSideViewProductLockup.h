//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface GOOSideViewProductLockup : NSObject
{
    NSString *_fullProductName;
    UIImage *_narrowImage;
    UIImage *_wideImage;
}

+ (id)productLockupWithFullProductName:(id)arg1 narrowImage:(id)arg2 wideImage:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *wideImage; // @synthesize wideImage=_wideImage;
@property(retain, nonatomic) UIImage *narrowImage; // @synthesize narrowImage=_narrowImage;
@property(retain, nonatomic) NSString *fullProductName; // @synthesize fullProductName=_fullProductName;
- (id)imageForWidth:(double)arg1;
- (id)lockupViewForWidthConstraint:(double)arg1;
- (id)initWithFullProductName:(id)arg1;
- (id)initWithNarrowImage:(id)arg1 wideImage:(id)arg2;
- (id)initWithFullProductName:(id)arg1 narrowImage:(id)arg2 wideImage:(id)arg3;

@end

