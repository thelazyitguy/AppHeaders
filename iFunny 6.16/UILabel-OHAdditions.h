//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@class NSTextContainer;

@interface UILabel (OHAdditions)
+ (id)if_detailLabel;
+ (id)if_titleLabel;
- (unsigned long long)characterIndexAtPoint:(struct CGPoint)arg1;
@property(readonly, nonatomic) NSTextContainer *currentTextContainer;
- (_Bool)GMSx_validateText:(id)arg1 font:(struct __CTFont *)arg2;
- (_Bool)GMSx_goo_fallbackToSystemFontIfNeeded;
- (struct CGSize)if_sizeMultilineWithMaxWidth:(double)arg1;
- (struct CGSize)if_size;
@end
