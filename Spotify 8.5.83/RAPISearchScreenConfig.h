//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RAPIScreenConfig.h"

@protocol RAPISearchScreenDelegate;

@interface RAPISearchScreenConfig : RAPIScreenConfig
{
    _Bool _showEmptyResultGroups;
    id <RAPISearchScreenDelegate> _delegate;
}

- (void).cxx_destruct;
@property _Bool showEmptyResultGroups; // @synthesize showEmptyResultGroups=_showEmptyResultGroups;
@property(retain) id <RAPISearchScreenDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;

@end

