//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PageSegmentedControlDelegate-Protocol.h"
#import "REDPageViewControllerDataSource-Protocol.h"
#import "REDPageViewControllerDelegate-Protocol.h"

@class NSArray;

@interface _TtC6Reddit30PagedTabCoordinatingController : NSObject <PageSegmentedControlDelegate, REDPageViewControllerDelegate, REDPageViewControllerDataSource>
{
    // Error parsing type: , name: controllers
    // Error parsing type: , name: headerTabsViewController
    // Error parsing type: , name: pageViewController
    // Error parsing type: , name: segmentedControl
}

- (void).cxx_destruct;
- (id)init;
- (void)pageViewController:(id)arg1 scrollingWithProgress:(double)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)pageViewController:(id)arg1 transitionCompleted:(_Bool)arg2 fromViewController:(id)arg3 toViewController:(id)arg4 navigationMethod:(long long)arg5;
- (void)pageSegmentedControl:(id)arg1 didSelectItem:(id)arg2 atIndex:(long long)arg3 previousIndex:(long long)arg4;
@property(nonatomic, readonly) NSArray *controllers;

@end

