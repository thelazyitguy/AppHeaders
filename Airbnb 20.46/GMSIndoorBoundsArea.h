//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GMSIndoorBoundsArea : NSObject
{
    struct unique_ptr<gmscore::model::CollidableSet2D, std::__1::default_delete<gmscore::model::CollidableSet2D>> _collidableSet;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithTriangleList:(const struct TriangleList2D *)arg1;

@end

