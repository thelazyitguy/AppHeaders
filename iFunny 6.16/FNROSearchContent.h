//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/IFNetworkResponseMappable-Protocol.h>

@class FNROPaging, FNROSearchNum, NSArray;

@interface FNROSearchContent : NSObject <IFNetworkResponseMappable>
{
    NSArray *_content;
    FNROPaging *_paging;
    FNROSearchNum *_num;
}

+ (id)objectMapping;
- (void).cxx_destruct;
@property(retain, nonatomic) FNROSearchNum *num; // @synthesize num=_num;
@property(retain, nonatomic) FNROPaging *paging; // @synthesize paging=_paging;
@property(copy, nonatomic) NSArray *content; // @synthesize content=_content;

@end
