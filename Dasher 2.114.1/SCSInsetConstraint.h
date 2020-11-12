//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSLayoutConstraint;

@interface SCSInsetConstraint : NSObject
{
    NSLayoutConstraint *_top;
    NSLayoutConstraint *_leading;
    NSLayoutConstraint *_bottom;
    NSLayoutConstraint *_trailing;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long active;
@property(readonly, copy, nonatomic) NSArray *constraints;
@property(nonatomic) struct UIEdgeInsets insets;
- (id)initWithConstraintsArray:(id)arg1;
- (id)initWithConstraints:(id)arg1;
- (id)initWithTop:(id)arg1 leading:(id)arg2 bottom:(id)arg3 trailing:(id)arg4;

@end
