//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface YTShortsTrimFilmstripModel : NSObject <NSCopying>
{
    _Bool _isImageDataStale;
    double _normalizedScrollAmount;
    double _numberOfImages;
    NSArray *_images;
    NSString *_accessibilityValue;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *accessibilityValue; // @synthesize accessibilityValue=_accessibilityValue;
@property(copy, nonatomic) NSArray *images; // @synthesize images=_images;
@property(nonatomic) _Bool isImageDataStale; // @synthesize isImageDataStale=_isImageDataStale;
@property(nonatomic) double numberOfImages; // @synthesize numberOfImages=_numberOfImages;
@property(nonatomic) double normalizedScrollAmount; // @synthesize normalizedScrollAmount=_normalizedScrollAmount;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

