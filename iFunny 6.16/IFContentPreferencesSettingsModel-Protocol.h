//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/IFModelProtocol-Protocol.h>

@class NSString;

@protocol IFContentPreferencesSettingsModel <IFModelProtocol>
@property(copy, nonatomic) CDUnknownBlockType enableStateHandler;
@property(copy, nonatomic) CDUnknownBlockType saveStateHandler;
- (void)updatePreferencesWithCompletion:(void (^)(NSArray *, NSArray *))arg1 failure:(void (^)(NSError *))arg2;
- (void)preferencesWithCompletion:(void (^)(NSArray *, NSArray *))arg1 failure:(void (^)(NSError *))arg2;
- (void)markItemWithId:(NSString *)arg1 type:(unsigned long long)arg2 asSelected:(_Bool)arg3;
@end

