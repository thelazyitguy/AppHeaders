//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface RemovalReason : NSObject
{
    NSString *_reasonId;
    NSString *_title;
    NSString *_message;
}

+ (id)reasonsWithData:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSString *reasonId; // @synthesize reasonId=_reasonId;
- (id)initWithData:(id)arg1;

@end
