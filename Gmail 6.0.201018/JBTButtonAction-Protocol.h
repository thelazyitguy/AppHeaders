//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JBTSmartMailAction-Protocol.h"
#import "JavaObject-Protocol.h"

@class ComGoogleCommonBaseOptional, JBTButtonAction_Style, NSString;
@protocol ComGoogleCommonUtilConcurrentListenableFuture, JBTCallback, JBTSpan;

@protocol JBTButtonAction <JBTSmartMailAction, JavaObject>
- (ComGoogleCommonBaseOptional *)getAckText;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)click;
- (void)clickWithJBTCallback:(id <JBTCallback>)arg1 withJBTSpan:(id <JBTSpan>)arg2;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)clickWithJBTSpan:(id <JBTSpan>)arg1;
- (ComGoogleCommonBaseOptional *)getImage;
- (JBTButtonAction_Style *)getStyle;
- (_Bool)isRepeatable;
- (_Bool)requiresConfirmation;
- (NSString *)getButtonText;
- (_Bool)isClicked;
@end
