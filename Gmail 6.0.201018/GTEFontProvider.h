//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GTECache;

@interface GTEFontProvider : NSObject
{
    GTECache *_fontCache;
    _Bool _adjustsToA11yFontScale;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool adjustsToA11yFontScale; // @synthesize adjustsToA11yFontScale=_adjustsToA11yFontScale;
- (double)pointSizeForMDCTextStyle:(long long)arg1;
- (double)pointSizeForGTFontSize:(long long)arg1;
- (id)generateFontWithFamily:(long long)arg1 size:(long long)arg2 weight:(long long)arg3;
- (id)fontKeyForFamily:(long long)arg1 size:(long long)arg2 weight:(long long)arg3;
- (id)fontWithFamily:(long long)arg1 size:(long long)arg2 weight:(long long)arg3;
- (void)clearCache;
- (id)initWithAdjustsToA11yFontScale:(_Bool)arg1;

@end
