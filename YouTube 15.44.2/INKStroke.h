//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIBezierPath, UIColor;

@interface INKStroke : NSObject
{
    UIColor *_color;
    UIBezierPath *_path;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) UIBezierPath *path; // @synthesize path=_path;
@property(readonly, copy, nonatomic) UIColor *color; // @synthesize color=_color;
- (id)initWithColor:(id)arg1 path:(id)arg2;

@end

