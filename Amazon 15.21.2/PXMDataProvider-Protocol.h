//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol PXMDataProvider <NSObject>
- (void)requestMenuContentFromHost:(NSString *)arg1 handler:(void (^)(NSArray *))arg2;
- (void)requestPantryBoxInfoFromHost:(NSString *)arg1 handler:(void (^)(PXMPantryBoxInfo *))arg2;
@end
