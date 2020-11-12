//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import "DXPLibraryStateObserver-Protocol.h"

@class DXPLibraryState, NSString;

@interface DXPSettingsVC : UITableViewController <DXPLibraryStateObserver>
{
    DXPLibraryState *_currentState;
    NSString *_libraryVersion;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *libraryVersion; // @synthesize libraryVersion=_libraryVersion;
@property(retain, nonatomic) DXPLibraryState *currentState; // @synthesize currentState=_currentState;
- (id)scaledFont:(id)arg1 forStyle:(id)arg2;
- (id)subtitleFont;
- (id)titleFont;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (_Bool)shouldHideRowAtIndexPath:(id)arg1;
- (id)currentPolicy;
- (id)formattedDate;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)libraryStateDidUpdate:(id)arg1 oldState:(id)arg2;
- (id)initWithState:(id)arg1 libraryVersion:(id)arg2;

@end
