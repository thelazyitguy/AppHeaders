//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SlackMessagesUI/NSObject-Protocol.h>

@class NSAttributedString, NSDate, NSString, TSFParserContext, UIColor, _TtC6TSFKit31TSF2TextRenderingOptionsWrapper;

@protocol _TtP15SlackMessagesUI22SMUMessageTextDelegate_ <NSObject>
- (NSAttributedString *)attributedStringForEmoji:(NSString *)arg1;
- (NSString *)ordinalDisplayStringFrom:(NSDate *)arg1 currentDate:(NSDate *)arg2;
- (NSString *)relativeStringFrom:(NSDate *)arg1 to:(NSDate *)arg2;
- (NSString *)displayStringFromTimestamp:(NSString *)arg1;
- (NSAttributedString *)processedAttributedString:(NSString *)arg1 mode:(long long)arg2 options:(_TtC6TSFKit31TSF2TextRenderingOptionsWrapper *)arg3 parserContext:(TSFParserContext *)arg4 color:(UIColor *)arg5 afterConfiguringIn:(void (^)(NSMutableAttributedString *))arg6;
- (NSAttributedString *)processedAttributedString:(NSString *)arg1 mode:(long long)arg2 options:(_TtC6TSFKit31TSF2TextRenderingOptionsWrapper *)arg3 parserContext:(TSFParserContext *)arg4;
- (NSAttributedString *)processedAttributedString:(NSString *)arg1 mode:(long long)arg2 options:(_TtC6TSFKit31TSF2TextRenderingOptionsWrapper *)arg3;
- (NSAttributedString *)processedAttributedString:(NSString *)arg1 mode:(long long)arg2;
- (NSAttributedString *)processedAttributedString:(NSString *)arg1;
@end

