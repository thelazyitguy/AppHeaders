//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TFNTwitterAccount, TFSTwitterScribeContext;

@interface T1StatusTableRowAdapterTweetDetails : NSObject
{
    TFNTwitterAccount *_account;
    TFSTwitterScribeContext *_scribeContext;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) TFSTwitterScribeContext *scribeContext; // @synthesize scribeContext=_scribeContext;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (id)tableViewController:(id)arg1 didSelectStatus:(id)arg2;
- (void)presentDetailForStatus:(id)arg1 inTableViewController:(id)arg2;
- (id)init;
- (id)initWithAccount:(id)arg1 scribeContext:(id)arg2;

@end

