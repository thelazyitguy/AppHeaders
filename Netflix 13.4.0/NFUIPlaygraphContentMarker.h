//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface NFUIPlaygraphContentMarker : NSObject
{
    _Bool _skippable;
    NSString *_compName;
    NSString *_name;
    double _start;
    double _end;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool skippable; // @synthesize skippable=_skippable;
@property(nonatomic) double end; // @synthesize end=_end;
@property(nonatomic) double start; // @synthesize start=_start;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *compName; // @synthesize compName=_compName;
- (id)initWithCompositionName:(id)arg1 name:(id)arg2 start:(double)arg3 end:(double)arg4 isSkippable:(_Bool)arg5;

@end

