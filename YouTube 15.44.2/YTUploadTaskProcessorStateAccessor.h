//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface YTUploadTaskProcessorStateAccessor : NSObject
{
    int _type;
    NSString *_key;
}

- (void).cxx_destruct;
- (void)setStateEntity:(id)arg1 inEntity:(id)arg2;
- (id)stateEntityForEntity:(id)arg1;
- (id)stateForTask:(id)arg1;
- (id)initWithProcessorType:(int)arg1;

@end
