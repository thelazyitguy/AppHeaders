//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class A9VSScanItServerCredentials, NSString;

@protocol A9VSScanItDebugDelegate <NSObject>

@optional
- (void)enableDebugIngress:(_Bool)arg1;
- (void)enableDebugJSON:(_Bool)arg1;
- (void)styleDebugEnabled:(_Bool)arg1;
- (void)longPressStringEditingChangedTo:(_Bool)arg1;
- (void)showStringIdsChangedTo:(_Bool)arg1;
- (void)debugExploreLooksServerURLChangedTo:(NSString *)arg1;
- (void)debugA9VSServerCredentialsChangedTo:(A9VSScanItServerCredentials *)arg1;
- (void)debugA9VSServerURLChangedTo:(NSString *)arg1;
- (void)debugUserModeChangedTo:(unsigned long long)arg1;
@end
