//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MDFFontDiskLoader;

@interface GMDCProductLockupFonts : NSObject
{
}

+ (void)setLocaleOverrideForTestingWithSubstitute:(id)arg1;
+ (void)enableFontResourceAssertion:(_Bool)arg1;
+ (id)fontDiskLoaderWithFontName:(id)arg1;
@property(readonly, nonatomic) MDFFontDiskLoader *latinLockupFontDiskLoader;
- (id)fallbackFontNameByLocaleMap;
- (_Bool)fontName:(id)arg1 canRenderAllGlyphsInText:(id)arg2;
- (id)fontWithName:(id)arg1 size:(double)arg2;
- (id)fontNameThatCanRepresentText:(id)arg1 logoPlaceholder:(id)arg2;

@end
