//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChromeInternal/NSObject-Protocol.h>

@class ELMByteStore;
@protocol XUIPersistentStore, XUIPersistentStoreController;

@protocol XUIPersistentStoreControllerFactory <NSObject>
- (id <XUIPersistentStoreController>)makeWithPersistentStore:(id <XUIPersistentStore>)arg1 byteStore:(ELMByteStore *)arg2;
@end
