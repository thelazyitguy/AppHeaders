//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ProfileEventTuple : NSObject
{
    int _elementId;
    NSString *_jsonBlob;
    NSString *_customerId;
    NSString *_action;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *action; // @synthesize action=_action;
@property(copy, nonatomic) NSString *customerId; // @synthesize customerId=_customerId;
@property(copy, nonatomic) NSString *jsonBlob; // @synthesize jsonBlob=_jsonBlob;
@property(nonatomic) int elementId; // @synthesize elementId=_elementId;

@end

