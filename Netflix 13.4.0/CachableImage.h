//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CachableAsset.h"

@class NSDictionary;

@interface CachableImage : CachableAsset
{
    float _width;
    float _height;
    NSDictionary *_fallback;
}

+ (id)cacheableImageFromData:(id)arg1;
- (void).cxx_destruct;
@property float height; // @synthesize height=_height;
@property float width; // @synthesize width=_width;
@property(copy, nonatomic) NSDictionary *fallback; // @synthesize fallback=_fallback;

@end

