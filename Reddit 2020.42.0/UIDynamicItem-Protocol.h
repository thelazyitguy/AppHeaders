//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditUI/NSObject-Protocol.h>

@class UIBezierPath;

@protocol UIDynamicItem <NSObject>
@property(nonatomic) struct CGAffineTransform transform;
@property(nonatomic, readonly) struct CGRect bounds;
@property(nonatomic) struct CGPoint center;

@optional
@property(nonatomic, readonly) UIBezierPath *collisionBoundingPath;
@property(nonatomic, readonly) unsigned long long collisionBoundsType;
@end

