//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SMAVariableObserver : NSObject
{
    CDUnknownBlockType _onNewValue;
    CDUnknownBlockType _onNewError;
}

@property(copy, nonatomic) CDUnknownBlockType onNewError; // @synthesize onNewError=_onNewError;
@property(copy, nonatomic) CDUnknownBlockType onNewValue; // @synthesize onNewValue=_onNewValue;
- (void).cxx_destruct;
- (void)on:(id)arg1 typeCast:(CDUnknownBlockType)arg2;
- (void)on:(id)arg1;

@end
