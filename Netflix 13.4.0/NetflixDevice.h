//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface NetflixDevice : NSObject
{
    NSString *esnPrefix_;
    NSString *esn_;
    NSString *udid_;
    NSString *_hashedUuid;
}

+ (id)modelName;
+ (id)hashUdid:(id)arg1;
+ (id)hexify:(char *)arg1 length:(unsigned long long)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *hashedUuid; // @synthesize hashedUuid=_hashedUuid;
@property(copy, nonatomic) NSString *udid; // @synthesize udid=udid_;
@property(copy, nonatomic) NSString *esn; // @synthesize esn=esn_;
@property(copy, nonatomic) NSString *esnPrefix; // @synthesize esnPrefix=esnPrefix_;

@end
