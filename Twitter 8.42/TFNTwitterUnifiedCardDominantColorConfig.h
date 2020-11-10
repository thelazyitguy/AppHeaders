//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor;

@interface TFNTwitterUnifiedCardDominantColorConfig : NSObject
{
    _Bool _shouldShowAppDetailsDominantColor;
    _Bool _shouldShowAppButtonDominantColor;
    _Bool _shouldShowWebsiteCardDetailsDominantColor;
    UIColor *_dominantColor;
}

+ (id)defaultConfig;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool shouldShowWebsiteCardDetailsDominantColor; // @synthesize shouldShowWebsiteCardDetailsDominantColor=_shouldShowWebsiteCardDetailsDominantColor;
@property(readonly, nonatomic) _Bool shouldShowAppButtonDominantColor; // @synthesize shouldShowAppButtonDominantColor=_shouldShowAppButtonDominantColor;
@property(readonly, nonatomic) _Bool shouldShowAppDetailsDominantColor; // @synthesize shouldShowAppDetailsDominantColor=_shouldShowAppDetailsDominantColor;
@property(readonly, nonatomic) UIColor *dominantColor; // @synthesize dominantColor=_dominantColor;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isDefaultConfig;
- (id)initWithDominantColor:(id)arg1 shouldShowAppDetailsDominantColor:(_Bool)arg2 shouldShowAppButtonDominantColor:(_Bool)arg3 shouldShowWebsiteCardDetailsDominantColor:(_Bool)arg4;
- (id)init;

@end

