//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaLangException.h"

@protocol JavaxSecurityAuthCallbackCallback;

@interface JavaxSecurityAuthCallbackUnsupportedCallbackException : JavaLangException
{
    id <JavaxSecurityAuthCallbackCallback> callback_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)getCallback;
- (id)initWithJavaxSecurityAuthCallbackCallback:(id)arg1 withNSString:(id)arg2;
- (id)initWithJavaxSecurityAuthCallbackCallback:(id)arg1;

@end
