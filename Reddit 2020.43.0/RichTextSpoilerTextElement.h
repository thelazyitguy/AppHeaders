//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSUUID;

@interface RichTextSpoilerTextElement : NSObject
{
    // Error parsing type: , name: spoilerId
    // Error parsing type: , name: elements
}

+ (id)elementWithData:(id)arg1 media:(id)arg2;
- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(void *)arg1;
@property(nonatomic, readonly) NSString *previewText;
- (id)attributedStringWithConfig:(id)arg1;
- (id)initWithData:(id)arg1 media:(id)arg2;
- (id)initWithElements:(id)arg1 spoilerId:(id)arg2;
@property(nonatomic, readonly) NSArray *elements;
@property(nonatomic, readonly) NSUUID *spoilerId;

@end
