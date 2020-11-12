//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JBTHtmlRenderer-Protocol.h"
#import "JBTTranslationEngine-Protocol.h"

@class JSLRenderContext, JSLTemplatePool, NSString;

@interface JBTMobileJsLayoutHtmlRenderer : NSObject <JBTHtmlRenderer, JBTTranslationEngine>
{
    JSLTemplatePool *templatePool_;
    JSLRenderContext *renderContext_;
}

- (void)dealloc;
- (id)translatePluralMessageWithInt:(int)arg1 withInt:(int)arg2 withNSStringArray:(id)arg3;
- (id)translateMessageWithInt:(int)arg1 withNSStringArray:(id)arg2;
- (id)renderTemplateWithNSString:(id)arg1 withJavaUtilList:(id)arg2 withJBTSpan:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
