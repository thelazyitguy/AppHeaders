//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GTLRAccountsettingsmobileObjc_Screen, NSDate;

@interface ASMCachedScreen : NSObject
{
    _Bool _fresh;
    GTLRAccountsettingsmobileObjc_Screen *_screen;
    NSDate *_lastRefreshDate;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDate *lastRefreshDate; // @synthesize lastRefreshDate=_lastRefreshDate;
@property(nonatomic) _Bool fresh; // @synthesize fresh=_fresh;
@property(readonly, nonatomic) GTLRAccountsettingsmobileObjc_Screen *screen; // @synthesize screen=_screen;
- (id)initWithScreen:(id)arg1;

@end

