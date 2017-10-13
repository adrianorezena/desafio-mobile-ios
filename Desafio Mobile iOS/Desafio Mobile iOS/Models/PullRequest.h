//
//  PullRequest.h
//  Desafio Mobile iOS
//
//  Created by Adriano Rezena on 12/10/17.
//  Copyright © 2017 Adriano Rezena. All rights reserved.
//

#import <Realm/Realm.h>
#import "Owner.h"

@interface PullRequest : RLMObject

- (id)initWithDictionary:(NSDictionary*)dictionary andRepositoryId:(NSInteger)repositoryId;

@property NSInteger id;
@property NSInteger repositoryId;
@property NSString *url;
@property NSString *state;
@property NSString *title;
@property NSString *body;
@property NSDate *created_at;
@property Owner* owner;

@end