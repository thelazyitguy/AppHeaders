//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface FalcorFunctionCall : NSObject
{
    NSString *_callKeyPath;
    NSArray *_callArguments;
    NSArray *_returnKeyPathSuffixes;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *returnKeyPathSuffixes; // @synthesize returnKeyPathSuffixes=_returnKeyPathSuffixes;
@property(copy, nonatomic) NSArray *callArguments; // @synthesize callArguments=_callArguments;
@property(copy, nonatomic) NSString *callKeyPath; // @synthesize callKeyPath=_callKeyPath;
- (id)description;
- (id)initForKeyPath:(id)arg1 withArguments:(id)arg2 returnKeyPathSuffixes:(id)arg3;

@end

