//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _TtC15SlackFoundation8Keychain : NSObject
{
    // Error parsing type: , name: bundleId
    // Error parsing type: , name: secItemFactory
    // Error parsing type: , name: logger
}

+ (id)storeForShareExtension;
+ (id)main;
- (void).cxx_destruct;
- (id)init;
- (_Bool)removeAllItemsAndReturnError:(id *)arg1;
- (_Bool)setString:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
- (id)stringForKey:(id)arg1 error:(id *)arg2;
- (_Bool)removeDataForKey:(id)arg1 error:(id *)arg2;
- (_Bool)setData:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
- (id)dataForKey:(id)arg1 error:(id *)arg2;
- (_Bool)containsWithKey:(id)arg1;

@end
