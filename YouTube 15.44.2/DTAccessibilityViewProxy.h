//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSProxy.h>

@class DTTextAttachment;
@protocol DTAccessibilityViewProxyDelegate;

@interface DTAccessibilityViewProxy : NSProxy
{
    id <DTAccessibilityViewProxyDelegate> _delegate;
    DTTextAttachment *_textAttachment;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) DTTextAttachment *textAttachment; // @synthesize textAttachment=_textAttachment;
@property(readonly, nonatomic) id <DTAccessibilityViewProxyDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (Class)class;
- (id)proxiedView;
- (id)initWithTextAttachment:(id)arg1 delegate:(id)arg2;

@end

