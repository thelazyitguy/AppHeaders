//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleCommonBaseConverter.h"

#import "JavaIoSerializable-Protocol.h"

@class NSString;
@protocol ComGoogleCommonBaseFunction;

@interface ComGoogleCommonBaseConverter_FunctionBasedConverter : ComGoogleCommonBaseConverter <JavaIoSerializable>
{
    id <ComGoogleCommonBaseFunction> forwardFunction_;
    id <ComGoogleCommonBaseFunction> backwardFunction_;
}

- (void)dealloc;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)doBackwardWithId:(id)arg1;
- (id)doForwardWithId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
