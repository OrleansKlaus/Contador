//
//  Contador.h
//  ContaPessoas
//
//  Created by Vinicius Miana on 2/18/15.
//  Copyright (c) 2015 Vinicius Miana. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol AtualizarValores <NSObject>

@required
-(void)AtualizarValores;

@end

@interface Contador : NSObject

@property(nonatomic,assign) id mostrarValores;

+(Contador *)globalContador;

- (void)maisUmCueca;
- (void)maisUmaGata;

-(int)getBoys;
-(int)getGirls;
-(int)getTotal;

@end

