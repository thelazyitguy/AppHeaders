//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSValue;

@interface RUIScrollViewObservedChange : NSObject
{
    long long _option;
    NSValue *_oldValue;
    NSValue *_value;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSValue *value; // @synthesize value=_value;
@property(readonly, nonatomic) NSValue *oldValue; // @synthesize oldValue=_oldValue;
@property(readonly, nonatomic) long long option; // @synthesize option=_option;
- (id)initWithKVODictionary:(id)arg1 option:(long long)arg2;

@end
