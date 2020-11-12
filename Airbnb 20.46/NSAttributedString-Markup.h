//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSAttributedString.h>

@interface NSAttributedString (Markup)
+ (id)attributedStringWithAttributedString:(id)arg1;
+ (id)attributedStringWithString:(id)arg1;
+ (id)attributedStringByProcessingMarkupInString:(id)arg1 baseFont:(id)arg2;
+ (id)attributedStringByProcessingMarkupInString:(id)arg1;
+ (id)attributedStringByProcessingMarkupInAttributedString:(id)arg1;
+ (void)processMarkupInAttributedString:(id)arg1;
+ (id)tagMappings;
+ (id)gt3_string:(id)arg1 fontSize:(double)arg2 color:(id)arg3;
- (unsigned char)lineBreakModeAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (unsigned char)textAlignmentAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (_Bool)textIsBoldAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (int)textUnderlineStyleAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (_Bool)textIsUnderlinedAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (id)textColorAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (id)fontAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (struct CGSize)sizeConstrainedToSize:(struct CGSize)arg1 fitRange:(struct _NSRange *)arg2;
- (struct CGSize)sizeConstrainedToSize:(struct CGSize)arg1;
- (struct CGSize)GMSx_gmcs_sizeConstrainedToSize:(struct CGSize)arg1 numberOfLines:(long long)arg2 defaultFont:(id)arg3 ceilResult:(_Bool)arg4;
- (struct CGSize)GMSx_gmcs_sizeConstrainedToSize:(struct CGSize)arg1 ceilResult:(_Bool)arg2 defaultFont:(id)arg3;
@end

