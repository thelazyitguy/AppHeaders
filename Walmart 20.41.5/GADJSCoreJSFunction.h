//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WalmartCore/GADJSFunction.h>

@class JSValue;

@interface GADJSCoreJSFunction : GADJSFunction
{
    JSValue *_functionValue;
}

- (void).cxx_destruct;
- (void)callWithArguments:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithFunctionValue:(id)arg1;

@end
