//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, UIViewController;
@protocol GDKFile, GDKFilesViewDataSource;

@protocol GDKFileActionHandling <NSObject>
- (void)handleAction:(NSString *)arg1 onFile:(id <GDKFile>)arg2 dataSource:(id <GDKFilesViewDataSource>)arg3 presentingViewController:(UIViewController *)arg4 userInfo:(NSDictionary *)arg5;
@end
